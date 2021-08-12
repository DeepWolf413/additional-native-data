// finale1.ysc @ L41541
bool func_908(var uParam0)
{
  int iVar0;

  func_1391(1);
  iVar0 = 0;
  while (iVar0 < 14)
  {
    func_1378(&(Local_1365[iVar0 /*8*/]), 0);
    func_1378(&(Local_1365[iVar0 /*8*/].f_1), 0);
    iVar0++;
  }
  if (iLocal_368 == 4)
  {
    func_188(4287500, 0, 0, 1, 1);
    iLocal_368 = 0;
  }
  func_465(iLocal_1646[36]);
  CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
  CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
  CAM::_0x0FF7125F07DEB84F(Local_225[3 /*9*/], 0);
  return uParam0->f_607 == uParam0->f_607;
}