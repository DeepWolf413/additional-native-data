// ambush_exc_wagon_bomb.ysc @ L8189
void func_272()
{
  int iVar0;
  vector3 vVar1;
  int iVar4;
  vector3 vVar5;

  iVar0 = func_127();
  vVar1 = { 0.2f, -0.2f, 0.8f };
  if (iLocal_279 == 1 && func_133(&uLocal_278, 4))
  {
    vVar1 = { 0.2f, -0.3f, 0.9f };
  }
  if (iLocal_279 == 0 && func_133(&uLocal_278, 4))
  {
    vVar1 = { 0.2f, -0.2f, 1f };
  }
  if (func_61(Local_15[iVar0], 0, 1))
  {
    PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
    vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15.f_52[0], vVar1) };
    TASK::OPEN_SEQUENCE_TASK(&iVar4);
    TASK::TASK_AIM_AT_COORD(0, vVar5, -1, 1, 1);
    func_201(Local_15[iVar0], &iVar4, 0, 0, 1, 1);
  }
}