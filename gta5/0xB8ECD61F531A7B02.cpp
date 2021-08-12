// fm_content_auto_shop_delivery.ysc @ L151751
void func_2479(int iParam0, int iParam1)
{
  struct<3> Var0;
  
  if (func_774(Local_1331.f_26[iParam0 /*22*/]))
  {
    if (func_2466(iParam1, 1306903184, 1))
    {
      if (Local_1331.f_26[iParam0 /*22*/].f_6 != Local_1331.f_26[iParam0 /*22*/].f_5 && !PED::IS_PED_RUNNING_RAGDOLL_TASK(iParam1))
      {
        TASK::CLEAR_PED_TASKS(iParam1);
      }
    }
    else
    {
      if (Local_1331.f_26[iParam0 /*22*/].f_6 == -1)
      {
        TASK::CLEAR_PED_TASKS(iParam1);
      }
      Var0 = { func_2478(iParam0, -1) };
      TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var0, func_2486(iParam0), func_2485(iParam0), true, func_2484(iParam0), 50f, func_2483(iParam0), 10f, func_2482(iParam0), func_2481(iParam0), func_2475(iParam0));
      if (Local_1331.f_26[iParam0 /*22*/].f_6 != Local_1331.f_26[iParam0 /*22*/].f_5)
      {
        func_2480(Local_1331.f_26[iParam0 /*22*/].f_5, iParam0);
      }
    }
  }
}