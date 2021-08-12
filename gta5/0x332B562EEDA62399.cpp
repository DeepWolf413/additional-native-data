// fm_mission_controller.ysc @ L851011
void func_14336(int iParam0)
{
  struct<3> Var0;
  int iVar3;
  
  if (((((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_3286, false) && !ENTITY::IS_ENTITY_IN_AIR(iLocal_3286)) && !ENTITY::IS_ENTITY_IN_WATER(iLocal_3286)) && MISC::IS_BIT_SET(bLocal_14863, 28)) && !MISC::IS_BIT_SET(bLocal_14863, 29)) && (func_92() || func_14261()))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_3286, true) };
    iVar3 = func_993(Var0);
    PED::SET_PED_TO_LOAD_COVER(iLocal_3286, true);
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_3286, Var0, -1, true, 0f, true, MISC::IS_BIT_SET(bLocal_14866, 7), iVar3, false);
    PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3286, true, false);
    MISC::SET_BIT(&bLocal_14863, 29);
  }
}