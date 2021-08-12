// beat_wealthy_couple.ysc @ L10121
bool func_294()
{
  if (!ENTITY::IS_ENTITY_DEAD(uLocal_312[2]))
  {
    if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_312[2], Global_35, 1, 1) || EVENT::_0xC6A7DC546E94FED5(uLocal_312[2], joaat("EVENT_SHOT_FIRED_WHIZZED_BY"), 0, 0) > -1) || EVENT::_0xC6A7DC546E94FED5(uLocal_312[2], joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"), 0, 0) > -1)
    {
      return true;
    }
  }
  return false;
}