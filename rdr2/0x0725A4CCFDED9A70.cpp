// braithwaites2.ysc @ L36180
int func_779(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_19[0]) && ENTITY::_IS_ENTITY_FROZEN(Local_14.f_19[0]))
  {
    ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_19[0], false);
  }
  if (!ENTITY::IS_ENTITY_DEAD(Global_35))
  {
    ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
    ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
    WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, false, false, true, false);
  }
  func_169(&(iLocal_770[0]));
  INVENTORY::_0x6A564540FAC12211(func_172(0), joaat("WEAPON_LASSO"));
  return 1;
}