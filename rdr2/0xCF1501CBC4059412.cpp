// coachrobberies_gang2.ysc @ L21041
void func_551()
{
  int iVar0;
  vector3 vVar1;

  vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_1392388.f_5, true, false) };
  if (func_29(iLocal_153, 0))
  {
    PED::SET_PED_USING_ACTION_MODE(iLocal_153, false, -1, 0);
    PED::SET_PED_CONFIG_FLAG(iLocal_153, 204, true);
    TASK::TASK_LOOK_AT_ENTITY(iLocal_153, Global_35, -1, 0, 51, 0);
    func_908(iLocal_153, joaat("WEAPON_UNARMED"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
    func_908(iLocal_153, joaat("WEAPON_UNARMED"), -1, 0, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
    WEAPON::SET_CURRENT_PED_WEAPON(iLocal_153, joaat("WEAPON_UNARMED"), false, 0, false, false);
    WEAPON::SET_CURRENT_PED_WEAPON(iLocal_153, joaat("WEAPON_UNARMED"), false, 1, false, false);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_STAND_STILL(0, 500);
    TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
    TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
    TASK::TASK_LOOT_NEAREST_ENTITY(0, vVar1, 1, -1f);
    TASK::TASK_LOOT_NEAREST_ENTITY(0, vVar1, 1, -1f);
    TASK::TASK_LOOT_NEAREST_ENTITY(0, vVar1, 1, -1f);
    TASK::TASK_LOOT_NEAREST_ENTITY(0, vVar1, 1, -1f);
    TASK::TASK_GO_TO_ENTITY(0, Global_1392388.f_5, -1, 7f, 1f, 2f, 0);
    TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_1392388.f_5, 0, -1f, -1f, -1f);
    func_909(0, joaat("WORLD_HUMAN_SMOKE"), 0, 1, 0, -1082130432 /* Float: -1f */);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::TASK_PERFORM_SEQUENCE(iLocal_153, iVar0);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  }
}