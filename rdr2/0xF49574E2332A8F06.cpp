// campfire_always.ysc @ L5622
void func_128(int iParam0)
{
  int iVar0;
  int iVar1;

  iVar1 = 0;
  while (iVar1 < iParam0->f_594)
  {
    if (iParam0->f_594[iVar1] == 0)
    {
    }
    else if (!ENTITY::_0x1FF441D7954F8709(iParam0->f_594[iVar1]))
    {
    }
    else
    {
      iVar0 = ENTITY::_0x4735E2A4BB83D9DA(iParam0->f_594[iVar1]);
      if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
      }
      else
      {
        OBJECT::_0xF49574E2332A8F06(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), 0f);
      }
    }
    iVar1++;
  }
  func_1(iParam0, 256);
}