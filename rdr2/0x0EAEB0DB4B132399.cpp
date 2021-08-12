// dino_bones.ysc @ L61
void func_1(var uParam0)
{
  if (iLocal_25 == joaat("BONE_25"))
  {
    if (INTERIOR::IS_VALID_INTERIOR(iLocal_36))
    {
      if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_36, "INT_GROUP_BONE_25") && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_36, "INT_GROUP_BONE_25"))
      {
        INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_36, "INT_GROUP_BONE_25", true);
      }
    }
  }
  func_12(&(uParam0->f_14), 1);
  func_12(&(uParam0->f_15), 1);
  if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Local_3.f_16))
  {
    PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Local_3.f_16));
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
  {
    if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_8))
    {
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, true, false);
    }
    ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_8));
  }
  SCRIPTS::_0xE7282390542F570D(uLocal_23);
  SCRIPTS::TERMINATE_THIS_THREAD();
}