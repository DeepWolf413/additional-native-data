// cv_amb_butcher_bleed_deer.ysc @ L648
void func_12(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < uParam0->f_2236)
  {
    if (!STREAMING::DOES_ANIM_DICT_EXIST(&(uParam0->f_2236[iVar0 /*8*/])))
    {
    }
    else
    {
      STREAMING::REMOVE_ANIM_DICT(&(uParam0->f_2236[iVar0 /*8*/]));
    }
    iVar0++;
  }
}