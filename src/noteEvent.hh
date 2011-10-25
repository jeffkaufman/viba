/*
 * noteEvent.hh
 *
 *  Created on: Oct 8, 2011
 *      Author: clahey
 */

#ifndef NOTEEVENT_HH_
#define NOTEEVENT_HH_

#include "note.hh"
#include "timeDelta.hh"

/*
 *
 */
class NoteEvent
{
public:
  NoteEvent(Note note, TimeDelta length, TimeDelta offset) : mNote(note), mLength(length), mOffset(offset) {};
  NoteEvent(NoteEvent event, TimeDelta offset) : mNote(event.mNote), mLength(event.mLength), mOffset(event.mOffset + offset) {};

  Note GetNote() const { return mNote; };
  TimeDelta GetLength() const { return mLength; };
  TimeDelta GetOffset() const { return mOffset; };

  Note SetNote(const Note& val) { mNote = val; };
protected:
  Note mNote;
  TimeDelta mLength;
  TimeDelta mOffset;
};

#endif /* NOTEEVENT_HH_ */
