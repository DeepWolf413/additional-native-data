// main.ysc @ L24803
void func_606()
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar1 = PLAYER::GET_PLAYER_INDEX();
  iVar0 = 0;
  while (iVar0 < 27)
  {
    if (func_1112(iVar0, 1, 0))
    {
      if (func_1113(iVar0))
      {
        iVar2 = func_1114(iVar0);
        if (!ENTITY::IS_ENTITY_DEAD(iVar2))
        {
          PED::_0x97B06669AC569003(iVar2, iVar1);
        }
      }
    }
    iVar0++;
  }
}