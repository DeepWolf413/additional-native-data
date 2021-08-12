// rcm_beau_and_penelope21.ysc @ L38950
void func_1232(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(Local_104[iParam0 /*23*/].f_1))
  {
    if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_104[iParam0 /*23*/].f_1))
    {
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_104[iParam0 /*23*/].f_1, true, false);
    }
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_104[iParam0 /*23*/].f_1, true);
    PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_104[iParam0 /*23*/].f_1, iLocal_276);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_104[iParam0 /*23*/].f_1, iLocal_276);
    PED::SET_PED_CONFIG_FLAG(Local_104[iParam0 /*23*/].f_1, 6, true);
    TASK::_0x8798CF6815B8FE0F(Local_104[iParam0 /*23*/].f_1, 30f);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_104[iParam0 /*23*/].f_1, 1);
    PATHFIND::ADD_NAVMESH_REQUIRED_REGION(Local_104[iParam0 /*23*/].f_3, Local_104[iParam0 /*23*/].f_3.f_1, 50f);
  }
}