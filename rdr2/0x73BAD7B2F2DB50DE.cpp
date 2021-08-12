// bounty1_outro.ysc @ L1377
bool func_68()
{
  func_34(&iLocal_109);
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_110))
  {
    iLocal_110 = func_110(76, iLocal_3);
    return false;
  }
  func_111(Global_1835011[7 /*74*/].f_1, 1);
  func_112(iLocal_3, 76, 2);
  LAW::_0x73BAD7B2F2DB50DE(PLAYER::GET_PLAYER_INDEX(), func_113(76, 1, 1));
  return true;
}