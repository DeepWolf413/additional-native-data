// short_update.ysc @ L5179
void func_150()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 10)
  {
    if (!ENTITY::IS_ENTITY_DEAD(Global_1945917.f_8[iVar0]))
    {
      if (PED::_0xA0BC8FAED8CFEB3C(Global_1945917.f_8[iVar0]))
      {
        if (PED::_IS_PED_CHILD(Global_1945917.f_8[iVar0]))
        {
          ENTITY::SET_ENTITY_INVINCIBLE(Global_1945917.f_8[iVar0], true);
          ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_1945917.f_8[iVar0], false);
          ENTITY::SET_ENTITY_PROOFS(Global_1945917.f_8[iVar0], 255, false);
        }
        Global_1945917.f_8[iVar0] = 0;
      }
    }
    iVar0++;
  }
}