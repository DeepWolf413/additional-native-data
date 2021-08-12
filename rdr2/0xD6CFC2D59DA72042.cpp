// beat_sharp_shooter.ysc @ L22239
void func_566(int iParam0)
{
  int iVar0;
  vector3 vVar1;

  vVar1 = { func_79(Local_251.f_1, Local_251.f_6) };
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iParam0]))
  {
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_445[iParam0], false);
    PED::SET_PED_CAN_BE_TARGETTED(iLocal_445[iParam0], true);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_FLY_TO_COORD(0, 2.75f, func_774(), 0, 0);
    TASK::TASK_FLYING_CIRCLE(0, 2f, vVar1, 0f, 15f);
    func_52(iLocal_445[iParam0], &iVar0, 0f, (BUILTIN::TO_FLOAT(iParam0) * 1.5f), 1, 1);
  }
}