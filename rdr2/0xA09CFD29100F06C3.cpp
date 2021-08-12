// ambush_bnd_cliff1.ysc @ L8047
bool func_293(int iParam0)
{
  if (!func_61(Local_15[iParam0], 0, 0) || !func_61(Local_15.f_40[iParam0], 0, 0))
  {
    return false;
  }
  switch (Local_274.f_7[iParam0 /*4*/].f_3)
  {
    case 0:
      TASK::TASK_HORSE_ACTION(Local_15.f_40[iParam0], 1, 0, 0);
      func_40(&(Local_274.f_7[iParam0 /*4*/]), 0);
      func_411(&(Local_274.f_7[iParam0 /*4*/]), iParam0, 1);
      break;
    case 1:
      if (func_47(&(Local_274.f_7[iParam0 /*4*/]), 2f))
      {
        if (!func_406(Local_15.f_40[iParam0], 1041577989))
        {
          func_411(&(Local_274.f_7[iParam0 /*4*/]), iParam0, 3);
        }
        else if (func_47(&(Local_274.f_7[iParam0 /*4*/]), 2.5f))
        {
          TASK::CLEAR_PED_TASKS(Local_15.f_40[iParam0], true, false);
          func_411(&(Local_274.f_7[iParam0 /*4*/]), iParam0, 3);
        }
      }
      break;
    case 3:
      return true;
  }
  return false;
}