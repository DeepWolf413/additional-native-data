// cv_cc_am_cnf_01.ysc @ L6513
var func_214()
{
  int iVar0;
  var uVar1;

  iVar0 = PLAYER::GET_PLAYER_INDEX();
  if (PLAYER::_0x3EE1F7A8C32F24E1(iVar0, &uVar1, 1, 0))
  {
    return uVar1;
  }
  if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &uVar1) || PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(iVar0, &uVar1))
  {
    return uVar1;
  }
  return uVar1;
}