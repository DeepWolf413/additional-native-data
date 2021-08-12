// act_caunc_rustling.ysc @ L26351
bool func_647()
{
  if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[2], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[2], false))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
    {
      ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[2], "UNIRANCHERS_01", iLocal_25, 0);
    }
    if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36))
    {
      STREAMING::REQUEST_MODEL(joaat("W_RIFLE_CARCANO01"), false);
      if (STREAMING::HAS_MODEL_LOADED(joaat("W_RIFLE_CARCANO01")))
      {
        iLocal_36 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_SNIPERRIFLE_CARCANO"), 7, 1379f, -875f, 69f, true, 1f);
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("W_RIFLE_CARCANO01"));
      }
    }
    else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[2], "w_rifle_carcano01", false)))
    {
      ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[2], "w_rifle_carcano01", iLocal_36, 0);
    }
    if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[2], "UNIRANCHERS_01", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[2], "w_rifle_carcano01", false)))
    {
      ANIMSCENE::START_ANIM_SCENE(iLocal_15[2]);
      return true;
    }
  }
  else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[2], true, false)) && (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[2], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[2], false)))
  {
    return true;
  }
  return false;
}