// beat_booby_trap.ysc @ L9977
bool func_275()
{
  if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 0))
  {
    return false;
  }
  if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_404, true, 0) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 21030, 0f, 0f, 0f))) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 0, 0f, 0f, 0f))) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 45454, 0f, 0f, 0f))) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 33646, 0f, 0f, 0f)))
  {
    return true;
  }
  return false;
}