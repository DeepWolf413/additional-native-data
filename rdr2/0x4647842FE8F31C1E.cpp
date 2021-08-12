// short_update.ysc @ L101938
bool func_3331(var uParam0, int iParam1, char* sParam2)
{
  if (!MISC::IS_BIT_SET(uParam0->f_28, 0))
  {
    if (MISC::IS_BIT_SET(uParam0->f_29, iParam1))
    {
      MISC::_0x4647842FE8F31C1E(Global_35, sParam2);
      MISC::SET_BIT(&(uParam0->f_28), 0);
      MISC::CLEAR_BIT(&(uParam0->f_29), iParam1);
    }
  }
  return MISC::IS_BIT_SET(uParam0->f_28, 0);
}