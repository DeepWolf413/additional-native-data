// braithwaites3.ysc @ L53864
void func_1299()
{
  var uVar0;

  if (!OBJECT::DOES_PICKUP_EXIST(iLocal_760))
  {
    MISC::SET_BIT(&uVar0, 2);
    iLocal_760 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_RIFLE_BOLTACTION"), 1004.97f, -1761.01f, 51.31f, -61.42f, -33.65f, 169.74f, 0, -1, 2, true, 0, 0, 0f, 0);
  }
}