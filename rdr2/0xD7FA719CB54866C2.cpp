// abigail2_1.ysc @ L14468
void func_40(bool bParam0)
{
  if (bParam0)
  {
    PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
    func_71(&Global_1935630, 4194304);
  }
  else
  {
    PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
    func_221(&Global_1935630, 4194304);
  }
  MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
  MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}