// assassin_construction.ysc @ L19798
void func_408()
{
  if (iLocal_1031 > 8 && iLocal_1031 < 16)
  {
    if (PLAYER::GET_MAX_WANTED_LEVEL() != 0)
    {
      PLAYER::SET_MAX_WANTED_LEVEL(0);
      MISC::ENABLE_DISPATCH_SERVICE(3, false);
      MISC::ENABLE_DISPATCH_SERVICE(5, false);
      PED::SET_CREATE_RANDOM_COPS(false);
    }
  }
}