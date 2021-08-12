// player_scene_f_lamtaunt.ysc @ L5770
int func_136()
{
  int iVar0;
  
  if (!func_135())
  {
    if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_96700))
    {
      iVar0 = 0;
      while (iVar0 < iLocal_262)
      {
        if (!PED::IS_PED_INJURED(iLocal_262[iVar0]))
        {
          TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[iVar0], Global_96700, &cLocal_361, &(Local_442[iVar0 /*16*/]), 8f, -4f, 3, 0, 1000f, 0);
          iLocal_270[iVar0] = 0;
        }
        else
        {
          iLocal_270[iVar0] = -1;
        }
        iVar0++;
      }
      PED::_DISPOSE_SYNCHRONIZED_SCENE(Global_96700);
      return 1;
    }
  }
  return 0;
}