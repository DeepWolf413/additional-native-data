// fm_mission_controller_2020.ysc @ L410665
void func_6677(var uParam0, var uParam1)
{
  var uVar0;
  float fVar1;
  
  if (((func_609(uParam0->f_9, uParam0->f_8, 568906980, 0, 0, 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_9, 568906980) != 2) && !((func_292(&(Local_36110.f_1618), uParam0->f_8) || func_6304(uParam0)) || func_6294(uParam0, 0, 0, 0))) && !PED::IS_PED_FLEEING(uParam0->f_9))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_9, false);
    if (uParam1->f_8)
    {
      if (uParam1->f_5)
      {
        func_6490(uParam0->f_11, -1, 1);
      }
      else if (uParam1->f_3 || uParam1->f_4)
      {
        func_6487(uParam0->f_11, -1, 1);
      }
    }
    fVar1 = Global_4718592.f_84792[uParam0->f_8 /*703*/].f_4;
    if (fVar1 <= 1f)
    {
      fVar1 = 1f;
    }
    TASK::TASK_GUARD_SPHERE_DEFENSIVE_AREA(uParam0->f_9, func_1048(uParam0->f_8, -1, &uVar0, 0), func_1044(uParam0->f_8, -1, 0, 0, 0), fVar1, -1, func_1048(uParam0->f_8, -1, &uVar0, 0), fVar1);
    func_337(&iLocal_12198, uParam0->f_8);
  }
}