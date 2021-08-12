// native3.ysc @ L64844
void func_1292(var uParam0, int iParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
  {
    if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, Global_35, 1, 1) || MISC::_0x970339EFA4FDE518(*uParam0, 1, 1) > 0)
    {
      uParam0->f_2 = (uParam0->f_2 + MISC::_0x970339EFA4FDE518(*uParam0, 1, 1));
      ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
    }
    if (uParam0->f_2 >= iParam1)
    {
      ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
      FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 5, 0.6f, true, false, 1f);
      VEHICLE::EXPLODE_VEHICLE(*uParam0, true, false, 0);
    }
  }
}