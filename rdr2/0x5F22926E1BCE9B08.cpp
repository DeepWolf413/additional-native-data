// beat_domestic_dispute.ysc @ L4304
void func_153()
{
  float fVar0;

  if (func_52(uLocal_309[0], func_99(&Local_17), 1) < 8f)
  {
    if (!bLocal_542 && iLocal_534 < 2)
    {
      PED::SET_PED_RESET_FLAG(uLocal_309[0], 12, true);
      PED::SET_PED_RESET_FLAG(uLocal_309[0], 172, true);
      fVar0 = func_157(uLocal_309[0], 1, 1);
      if (fVar0 < 1.75f && (PED::IS_PED_FACING_PED(uLocal_309[0], Global_35, 30f) || fVar0 < 1f))
      {
        TASK::TASK_EVASIVE_ANIM(Global_35, uLocal_309[0], func_317(644));
        bLocal_542 = true;
        iLocal_534++;
        func_33(&uLocal_590, 0);
      }
    }
    else if (func_133(&uLocal_590, 0.25f))
    {
      bLocal_542 = false;
    }
  }
}