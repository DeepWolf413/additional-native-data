// mob4_outro.ysc @ L519
bool func_21(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_22))
  {
    iLocal_22 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2, "CreoleCaptain", false);
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_22, true, true);
    return false;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24))
  {
    iLocal_24 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_2, "SKIFF", false);
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_24, true, true);
    VEHICLE::_SET_PED_OWNS_VEHICLE(iLocal_22, iLocal_24);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_24, false);
    return false;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25))
  {
    iLocal_25 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_2, "p_skiff02x", false);
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_25, true, true);
    OBJECT::_0xDFA1237F5228263F(iLocal_25, iLocal_22);
    return false;
  }
  return true;
}