ActionBar = {}

function ActionBar:addSlot()
	local yPosition = math.floor(self.slotcounter / self.columns)
	local xPosition = self.slotcounter - math.floor(self.slotcounter%self.columns)*self.columns
	
	self.slotcounter = self.slotcounter + 1
	
	local slot = self.entityIconManager:createSlot(self.iconsize)
	slot:getWindow():setPosition(CEGUI.UVector2(CEGUI.UDim(0, self.iconsize * xPosition), CEGUI.UDim(0, self.iconsize * yPosition)))
	self.iconContainer:addChildWindow(slot:getWindow())
	local slotWrapper = {slot = slot}
	table.insert(self.slots, slotWrapper)
	
	slotWrapper.entityIconDropped = function(entityIcon)
		local oldSlot = entityIcon:getSlot()
		slotWrapper.slot:addEntityIcon(entityIcon)
		if oldSlot ~= nil then
			oldSlot:notifyIconDraggedOff(entityIcon)
		end
	end
	
	slotWrapper.entityIconDropped_connector = EmberOgre.LuaConnector:new_local(slot.EventIconDropped):connect(slotWrapper.entityIconDropped)
	
	return slotWrapper
end

function ActionBar:buildCEGUIWidget()
	self.widget = guiManager:createWidget()
	self.widget:loadMainSheet("ActionBar.layout", "ActionBar/")
	self.iconContainer = self.widget:getWindow("IconContainer")
	self.widget:show()
	self:addSlot()
	self:addSlot()
	self:addSlot()
	self:addSlot()
end

function ActionBar:gotInput(args)
	debugObject(args)
end

function ActionBar.buildWidget()
	actionbar = {   iconsize = 32,
				columns = 1,
				iconcounter = 0,
				slotcounter = 0,
				inputHelper = nil,
				icons = {},
				connectors={},
				slots = {}}
				
	setmetatable(actionbar, {__index = ActionBar})
	--TODO: When we implement the shutdown method, we need to delete this
	actionbar.inputHelper = EmberOgre.Gui.ActionBarInput:new()
	actionbar.entityIconManager = guiManager:getEntityIconManager()
	
	connect(actionbar.connectors, actionbar.inputHelper.EventGotHotkeyInput, actionbar.gotInput, actionbar)
	
	actionbar:buildCEGUIWidget()
end

--connect(connectors, emberServices:getServerService().GotAvatar, ActionBar.buildWidget)
ActionBar.buildWidget()