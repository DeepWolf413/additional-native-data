// director_mode.ysc @ L4376
void func_21(int iParam0)
{
  int iVar0;
  
  if (iLocal_10052 > 0 && iParam0)
  {
    bLocal_11565 = true;
  }
  iLocal_10052 = 0;
  iLocal_10053 = 0;
  iLocal_10057 = 0;
  iVar0 = 0;
  while (iVar0 <= 49)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_9401[iVar0 /*13*/].f_11))
    {
      NETWORK::REMOVE_ALL_STICKY_BOMBS_FROM_ENTITY(Local_9401[iVar0 /*13*/].f_11, 0);
      OBJECT::DELETE_OBJECT(&(Local_9401[iVar0 /*13*/].f_11));
      func_18(Local_9401[iVar0 /*13*/].f_10);
    }
    Local_9401[iVar0 /*13*/] = { 0f, 0f, 0f };
    Local_9401[iVar0 /*13*/].f_3 = { 0f, 0f, 0f };
    Local_9401[iVar0 /*13*/].f_9 = 0f;
    Local_9401[iVar0 /*13*/].f_10 = 0;
    iVar0++;
  }
}