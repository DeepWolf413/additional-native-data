// winter4.ysc @ L40900
bool func_832(var uParam0)
{
  if (STREAMING::_IS_IMAP_ACTIVE(joaat("REG_HRT_00_WNT4_TRAIN_MILO")))
  {
    STREAMING::_REMOVE_IMAP(joaat("REG_HRT_00_WNT4_TRAIN_MILO"));
  }
  if (STREAMING::_IS_IMAP_ACTIVE(1903595390))
  {
    STREAMING::_REMOVE_IMAP(1903595390);
  }
  if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_218, 8)))
  {
    ENTITY::SET_ENTITY_COLLISION(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_218, 8), true, false);
    ENTITY::SET_ENTITY_VISIBLE(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_218, 8), true);
    VEHICLE::_0x762FDC4C19E5A981(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_218, 8), 1);
  }
  if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_402[25]))
  {
    ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_402[25]);
  }
  func_1568(uParam0, -1, 0);
  func_1397(uParam0, 524288);
  func_389(uParam0, 524288);
  return uParam0->f_607 == uParam0->f_607;
}