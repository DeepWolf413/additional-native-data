// gb_gunrunning_delivery.ysc @ L119348
void func_1250(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    return;
  }
  ENTITY::DETACH_ENTITY(*uParam0, true, true);
  VEHICLE::DETACH_VEHICLE_FROM_ANY_CARGOBOB(*uParam0);
  ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
  ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
  ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, ENTITY::GET_ENTITY_COORDS(*uParam0, true), false, false, true);
}