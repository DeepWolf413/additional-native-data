// am_armwrestling.ysc @ L113449
void func_830(var uParam0, var* uParam1, var uParam2, bool bParam3, float fParam4, float fParam5)
{
  int iVar0;
  int iVar1;
  struct<3> Var2;
  float fVar5;
  
  Var2 = { func_1012(uParam1, fParam4 > fParam5, func_842()) };
  fVar5 = func_832(uParam1);
  if (fParam4 < fParam5)
  {
    fVar5 = func_1040((fVar5 + 180f), 0f, 360f);
  }
  iVar0 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("proair_hoc_puck"), Var2, false, false, false);
  ENTITY::SET_ENTITY_HEADING(iVar0, fVar5);
  ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
  ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
  iVar1 = NETWORK::OBJ_TO_NET(iVar0);
  func_831(uParam0[iLocal_313 /*21*/], iVar0, iVar1);
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
  {
    ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0, -1, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true);
    ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar5);
    WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
  }
  if (bParam3)
  {
    func_1000(uParam2, 0, 1, 0, 3, 5000);
    CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  }
}