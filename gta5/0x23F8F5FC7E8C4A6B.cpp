// agency_prep2amb.ysc @ L9646
int func_184()
{
  var uVar0[5];
  int iVar6;
  
  PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
  iVar6 = 0;
  while (iVar6 <= 4)
  {
    if (func_250(uVar0[iVar6]) && uVar0[iVar6] != PLAYER::PLAYER_PED_ID())
    {
      if (SYSTEM::VDIST2(Local_106, ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true)) <= 16f)
      {
        return 1;
      }
    }
    iVar6++;
  }
  return 0;
}