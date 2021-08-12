// hideout_sixpointcabin.ysc @ L6072
void func_212()
{
  var uVar0;
  int iVar1;
  vector3 vVar2;
  float fVar5;

  if ((iLocal_785 < 0 || iLocal_785 + 1 < 0) || iLocal_786 < 0)
  {
    return;
  }
  if (func_205(Local_286[iLocal_785 /*9*/].f_5, 0, 1))
  {
    func_188(&(Local_29.f_38), Local_286[iLocal_785 /*9*/].f_5, "ODR_PED4", 1);
    iVar1 = joaat("WORLD_HUMAN_GUARD_SCOUT");
    vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_286[iLocal_785 /*9*/].f_5, true, false) };
    fVar5 = ENTITY::GET_ENTITY_HEADING(Local_286[iLocal_785 /*9*/].f_5);
    uVar0 = TASK::CREATE_SCENARIO_POINT(iVar1, vVar2, fVar5, 0, 0, 1);
    TASK::_TASK_START_SCENARIO_IN_PLACE_2(Local_286[iLocal_785 /*9*/].f_5, uVar0, 0, 0, false, -1f, false);
    PED::SET_PED_COMBAT_RANGE(Local_286[iLocal_785 /*9*/].f_5, 0);
  }
  if (func_205(Local_286[iLocal_785 + 1 /*9*/].f_5, 0, 1))
  {
    func_188(&(Local_29.f_38), Local_286[iLocal_785 + 1 /*9*/].f_5, "ODR_PED5", 1);
    iVar1 = joaat("WORLD_HUMAN_GUARD_MILITARY");
    vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_286[iLocal_785 + 1 /*9*/].f_5, true, false) };
    fVar5 = ENTITY::GET_ENTITY_HEADING(Local_286[iLocal_785 + 1 /*9*/].f_5);
    uVar0 = TASK::CREATE_SCENARIO_POINT(iVar1, vVar2, fVar5, 0, 0, 1);
    TASK::_TASK_START_SCENARIO_IN_PLACE_2(Local_286[iLocal_785 + 1 /*9*/].f_5, uVar0, 0, 0, false, -1f, false);
    PED::SET_PED_COMBAT_RANGE(Local_286[iLocal_785 + 1 /*9*/].f_5, 0);
  }
}