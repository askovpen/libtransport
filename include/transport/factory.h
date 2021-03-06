/**
 * XMPP - libpurple transport
 *
 * Copyright (C) 2009, Jan Kaluza <hanzz@soc.pidgin.im>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111-1301  USA
 */

#pragma once

#include <string>
#include <algorithm>
#include "transport/transport.h"

#include "Swiften/Elements/Message.h"
#include "transport/conversation.h"
#include "transport/buddy.h"
#include "transport/storagebackend.h"

namespace Transport {

class Conversation;
class Buddy;
class ConversationManager;
class RosterManager;

class Factory {
	public:
		
		virtual Conversation *createConversation(ConversationManager *conversationManager, const std::string &legacyName, bool isMuc = false) = 0;

		virtual Buddy *createBuddy(RosterManager *rosterManager, const BuddyInfo &buddyInfo) = 0;
};

}
