// shoprobberies.ysc @ L9472
void func_368(bool bParam0)
{
  if (bParam0)
  {
    PED::SET_CREATE_RANDOM_COPS(true);
    MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, false);
    MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, false);
  }
  else
  {
    func_773(Global_36, 300f, 0);
    PED::SET_CREATE_RANDOM_COPS(false);
    MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, true);
    MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, true);
    PERSCHAR::_0xE0E65E0D261F7507(func_45(3));
    func_774(3);
    func_775(3, 0);
  }
}