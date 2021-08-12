// fm_mission_controller_2020.ysc @ L757407
void func_14030(int iParam0)
{
  struct<3> Var0;
  float fVar3;
  int iVar4;
  
  if (((((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_22078, false) && !ENTITY::IS_ENTITY_IN_AIR(iLocal_22078)) && !ENTITY::IS_ENTITY_IN_WATER(iLocal_22078)) && MISC::IS_BIT_SET(bLocal_36046, 14)) && !MISC::IS_BIT_SET(bLocal_36046, 15)) && (func_1250() || func_13784()))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_22078, true) };
    fVar3 = -90f;
    iVar4 = func_743(ENTITY::GET_ENTITY_COORDS(iLocal_22078, true), &Var0);
    PED::SET_PED_TO_LOAD_COVER(iLocal_22078, true);
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_22078, Var0, -1, true, 0f, true, MISC::IS_BIT_SET(bLocal_36049, 6), iVar4, false);
    ENTITY::SET_ENTITY_HEADING(iLocal_22078, (ENTITY::GET_ENTITY_HEADING(iLocal_22078) + fVar3));
    PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_22078, true, false);
    fVar3 = 90f;
    if (PED::IS_PED_IN_COVER_FACING_LEFT(iLocal_22078))
    {
      fVar3 = -90f;
    }
    CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar3);
    MISC::SET_BIT(&bLocal_36046, 15);
  }
}