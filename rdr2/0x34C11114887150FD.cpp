// hunting1.ysc @ L52244
void func_1256()
{
  if (!PED::IS_PED_INJURED(Local_30.f_158))
  {
    if (PED::_0xA0BC8FAED8CFEB3C(Local_30.f_158))
    {
      PED::_0x34C11114887150FD(Local_30.f_158, 10);
      PED::_0xA7A806677F8DE138(Local_30.f_158);
      PED::CLEAR_PED_ENV_DIRT(Local_30.f_158);
      ATTRIBUTE::SET_ATTRIBUTE_POINTS(Local_30.f_158, 16, 0);
    }
  }
}