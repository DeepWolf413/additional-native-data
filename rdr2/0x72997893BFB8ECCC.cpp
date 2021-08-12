// beat_murder_campfire.ysc @ L3655
void func_118()
{
  vector3 vVar0[6];
  int iVar19;
  int iVar20;
  float fVar21;

  iVar19 = 1;
  while (iVar19 <= 5)
  {
    fVar21 = (MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 35f) + Local_345[iVar19 /*5*/].f_2);
    vVar0[iVar19 /*3*/] = { Local_345[iVar19 /*5*/], Local_345[iVar19 /*5*/].f_1, fVar21 };
    TASK::OPEN_SEQUENCE_TASK(&iVar20);
    TASK::TASK_FLYING_CIRCLE(0, 1f, vVar0[iVar19 /*3*/], 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f));
    func_284(iLocal_15[iVar19], &iVar20, 0f, 3f, 1, 1);
    iVar19++;
  }
}