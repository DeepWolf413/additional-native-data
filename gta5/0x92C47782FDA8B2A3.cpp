// am_mp_armory_truck.ysc @ L287017
void func_4771(var uParam0, var uParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (*uParam1 - 1))
  {
    ENTITY::CREATE_MODEL_SWAP((uParam0[iVar0 /*8*/])->f_2, 1f, (uParam0[iVar0 /*8*/])->f_5, (uParam0[iVar0 /*8*/])->f_1, true);
    iVar0++;
  }
}