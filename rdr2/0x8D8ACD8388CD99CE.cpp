// native_son2.ysc @ L52660
void func_1285()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 <= 2)
  {
    if (!func_425(Local_134[iVar0 /*17*/], 0))
    {
      if (PED::_0xB655DB7582AEC805(Local_134[iVar0 /*17*/]))
      {
        PED::_0xF6262491C7704A63(Local_134[iVar0 /*17*/], 0);
      }
      PED::REVIVE_INJURED_PED(Local_134[iVar0 /*17*/]);
      ENTITY::_SET_ENTITY_HEALTH(Local_134[iVar0 /*17*/], ENTITY::GET_ENTITY_MAX_HEALTH(Local_134[iVar0 /*17*/], false), 0);
    }
    iVar0++;
  }
}