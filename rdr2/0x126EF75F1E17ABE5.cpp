// beat_domestic_dispute.ysc @ L10482
void func_308(int iParam0, var uParam1, var uParam2, bool bParam3)
{
  Local_493 = 1;
  Local_493.f_1 = uParam1;
  Local_493.f_2 = uParam2;
  Local_493.f_3 = 0f;
  Local_493.f_4 = 1f;
  Local_493.f_5 = 1f;
  Local_493.f_16 = 0;
  Local_493.f_17 = 0.25f;
  Local_493.f_18 = 0.25f;
  Local_493.f_19 = -1;
  if (bParam3)
  {
    Local_493.f_20 = 1;
    Local_493.f_21 = 1;
  }
  else
  {
    Local_493.f_20 = 0;
    Local_493.f_21 = 1;
  }
  Local_493.f_23 = 1114112;
  TASK::TASK_SCRIPTED_ANIMATION(iParam0, &Local_493);
}