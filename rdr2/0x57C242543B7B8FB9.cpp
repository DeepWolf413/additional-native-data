// braithwaites3.ysc @ L35482
bool func_782(var uParam0)
{
  if ((func_394(iLocal_74, 32) && ENTITY::DOES_ENTITY_EXIST(Local_172[1 /*10*/])) && !ENTITY::IS_ENTITY_DEAD(Local_172[1 /*10*/]))
  {
    func_903(Local_172[1 /*10*/], 1015.285f, -1768.482f, 50.9984f, 274.5398f, 2, 1073741824 /* Float: 2f */);
  }
  func_168(0);
  OBJECT::_0x57C242543B7B8FB9(-1947039910, 1);
  iLocal_674[17] = VOLUME::_CREATE_VOLUME_BOX(1009.808f, -1761.313f, 47.48937f, 0f, 0f, 0f, 1.934035f, 1f, 2.009393f);
  PATHFIND::_0x19C7567D2F2287D6(iLocal_674[17], 7);
  return uParam0->f_607 == uParam0->f_607;
}