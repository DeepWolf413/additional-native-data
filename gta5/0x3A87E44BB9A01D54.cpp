// agency_heist2.ysc @ L870
int func_9()
{
  var uVar0;
  
  WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, false);
  return uVar0;
}