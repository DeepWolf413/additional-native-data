// am_casino_peds.ysc @ L252396
void func_3078()
{
  var uVar0[10];
  int iVar11;
  int iVar12;
  
  iVar11 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
  iVar12 = 0;
  while (iVar12 < iVar11)
  {
    if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar12]) && func_15(uVar0[iVar12])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar12]))
    {
      NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar12], true, true);
    }
    iVar12++;
  }
}