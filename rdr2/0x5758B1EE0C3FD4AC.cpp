// gator_eggs.ysc @ L91
void func_3(var uParam0)
{
  int iVar0;
  int iVar1;

  if (iLocal_34 != iVar0)
  {
    TASK::_0x5758B1EE0C3FD4AC(iLocal_34, 0);
  }
  if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
  {
    MAP::REMOVE_BLIP(&(uParam0->f_1));
  }
  iVar1 = 0;
  while (iVar1 < func_9(iLocal_36, 16))
  {
    if (ENTITY::DOES_ENTITY_EXIST(uLocal_22[iVar1]))
    {
      PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uLocal_22[iVar1]);
      PLAYER::_0xDC5E09D012D759C4(uLocal_22[iVar1], uLocal_22[iVar1], 0);
    }
    iVar1++;
  }
  SCRIPTS::_0xE7282390542F570D(uLocal_21);
  SCRIPTS::TERMINATE_THIS_THREAD();
}