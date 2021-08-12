// law_arrest.ysc @ L1871
void func_56(bool bParam0, int iParam1, int iParam2, float fParam3)
{
  if (bParam0)
  {
    MISC::_0x27A1B170AA8AF84C(iParam1);
    MISC::_0x89314FB3463E28DE(iParam2);
    MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(fParam3);
  }
  else
  {
    MISC::_0x96498D922D8D0D0A();
    MISC::_0x54EC7B6BC72BAD69();
    MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
  }
}