// act_fishing01.ysc @ L32588
void func_925(int iParam0, int iParam1, int iParam2)
{
  if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
  }
  if (iParam2 == -1)
  {
    if (!PED::IS_PED_A_PLAYER(iParam1))
    {
      iParam2 = 0;
    }
    else
    {
      iParam2 = 1;
    }
  }
  PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
  PED::_0xF634E2892220EF34(iParam0, iParam2);
}