// beat_drown_murder.ysc @ L3284
bool func_104()
{
  if (ENTITY::DOES_ENTITY_EXIST(uLocal_410[0]))
  {
    if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], 243556862))
    {
      if (!func_33(iLocal_400, 512))
      {
        PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(uLocal_410[0]);
        PED::SET_PED_WETNESS_HEIGHT(uLocal_410[0], 2f);
        func_30(&iLocal_400, 512);
      }
      return true;
    }
  }
  return false;
}