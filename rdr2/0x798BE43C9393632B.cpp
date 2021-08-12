// abigail2_1.ysc @ L76005
void func_2180(char* sParam0)
{
  if (sParam0->f_16)
  {
    CAM::_0x0A5A4F1979ABB40E(sParam0);
    if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && CAM::_0xDD0B7C5AE58F721D(sParam0))
    {
      CAM::_0x798BE43C9393632B(sParam0);
    }
    sParam0->f_16 = 0;
    StringCopy(sParam0, "", 64);
    StringCopy(&(sParam0->f_8), "", 64);
  }
}