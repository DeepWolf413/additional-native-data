// braithwaites1.ysc @ L57716
void func_1307(var uParam0, int iParam1)
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;

  vVar0 = { VOLUME::_GET_VOLUME_COORDS(*uParam0) };
  vVar3 = { VOLUME::_GET_VOLUME_ROTATION(*uParam0) };
  vVar6 = { VOLUME::_GET_VOLUME_SCALE(*uParam0) };
  VOLUME::_DELETE_VOLUME(*uParam0);
  *uParam0 = VOLUME::_0x0EB78C2B156635B1(iParam1, vVar0, vVar3, vVar6);
}