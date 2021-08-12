// chinese2.ysc @ L9846
void func_128(struct<3> Param0, bool bParam3)
{
  if (iLocal_438 == 0)
  {
    bParam3 = false;
  }
  FIRE::REMOVE_SCRIPT_FIRE(Local_281[iLocal_441 /*5*/]);
  if (Local_281[iLocal_441 /*5*/].f_4 != 0)
  {
    GRAPHICS::FADE_DECALS_IN_RANGE(Local_281[iLocal_441 /*5*/].f_1, 0.4f, 1f);
  }
  Local_281[iLocal_441 /*5*/].f_4 = MISC::GET_GAME_TIMER();
  Local_281[iLocal_441 /*5*/].f_1 = { Param0 };
  Local_281[iLocal_441 /*5*/] = FIRE::START_SCRIPT_FIRE(Param0, iLocal_270, bParam3);
  iLocal_441++;
  if (iLocal_441 >= 31)
  {
    iLocal_441 = 0;
  }
}